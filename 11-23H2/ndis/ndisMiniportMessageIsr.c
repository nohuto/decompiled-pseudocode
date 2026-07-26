/*
 * XREFs of ndisMiniportMessageIsr @ 0x1C0027EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     NdisMQueueDpcEx @ 0x1C003D650 (NdisMQueueDpcEx.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C003DCD4 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C003DD2A (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0092378 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

__int64 __fastcall ndisMiniportMessageIsr(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned __int64 v6; // r14
  unsigned int v7; // edx
  unsigned __int8 v8; // si
  __int64 v10; // rax
  _GROUP_AFFINITY TargetProcessors; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-18h]
  int v14; // [rsp+50h] [rbp-10h]
  char v15; // [rsp+88h] [rbp+28h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+38h] BYREF

  v3 = *(_QWORD *)(a2 + 96);
  LOBYTE(v4) = 0;
  v16 = 0;
  v15 = 0;
  v6 = a3;
  v7 = *(_DWORD *)(v3 + 48);
  v12 = 0LL;
  v13 = 0LL;
  v14 = -1;
  if ( v7 || *(_DWORD *)(v3 + 80) )
  {
    v10 = *(_QWORD *)(v3 + 40);
    v4 = *(_DWORD *)(v3 + 80);
    v13 = __PAIR64__(v4, v7);
    v12 = v10;
    if ( !v10 )
    {
      LOBYTE(v4) = BYTE4(v13);
      v12 = *(_QWORD *)(v3 + 40);
    }
  }
  if ( (v4 & 2) != 0 )
  {
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v12, 1u);
    LOBYTE(v4) = BYTE4(v13);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, unsigned int *))(a2 + 176))(
         *(_QWORD *)(a2 + 8),
         (unsigned int)v6,
         &v15,
         &v16);
  if ( (v4 & 2) != 0 )
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v12, 1u, 0xEuLL);
  if ( v8 && (v13 & 2) != 0 )
    ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)&v12, 1uLL, 1uLL);
  if ( v15 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
    if ( KeInsertQueueDpc(
           (PRKDPC)(*(_QWORD *)(a2 + 224)
                  + ((unsigned __int64)(ndisMaxNumberOfProcessors + (_DWORD)v6 * (ndisMaxNumberOfProcessors + 1)) << 6)),
           (PVOID)v6,
           0LL) )
    {
      if ( (v13 & 0x100000000000LL) != 0 )
        ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v12, 0xCu);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
    }
  }
  else
  {
    *(_QWORD *)&TargetProcessors.Group = 0LL;
    TargetProcessors.Mask = v16;
    NdisMQueueDpcEx((NDIS_HANDLE)a2, v6, &TargetProcessors, 0LL);
  }
  return v8;
}
