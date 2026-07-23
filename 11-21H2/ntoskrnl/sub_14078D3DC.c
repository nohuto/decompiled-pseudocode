/*
 * XREFs of sub_14078D3DC @ 0x14078D3DC
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x140768390 (IoRegisterPlugPlayNotification.c)
 *     sub_14078B7C4 @ 0x14078B7C4 (sub_14078B7C4.c)
 *     sub_14078D5D8 @ 0x14078D5D8 (sub_14078D5D8.c)
 *     sub_14094488C @ 0x14094488C (sub_14094488C.c)
 *     sub_140944ADC @ 0x140944ADC (sub_140944ADC.c)
 *     sub_140958B94 @ 0x140958B94 (sub_140958B94.c)
 * Callees:
 *     sub_140231240 @ 0x140231240 (sub_140231240.c)
 *     sub_1402312E0 @ 0x1402312E0 (sub_1402312E0.c)
 *     PsGetCurrentProcessSessionId @ 0x140287F00 (PsGetCurrentProcessSessionId.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402DF880 @ 0x1402DF880 (sub_1402DF880.c)
 *     sub_140359DE0 @ 0x140359DE0 (sub_140359DE0.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14078D3DC(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rcx
  BOOL v7; // eax
  unsigned __int8 CurrentIrql; // r13
  unsigned __int8 v9; // r15
  int v10; // r12d
  unsigned int v11; // ebp
  int v12; // eax
  int v13; // edi
  ULONG_PTR v15; // rax
  void *v16; // rsi
  int v17; // eax
  ULONG_PTR v18; // r8
  _OWORD v20[3]; // [rsp+38h] [rbp-70h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  memset(v20, 0, sizeof(v20));
  v7 = sub_140359DE0(v4);
  if ( !v7 || *(_QWORD *)(a1 + 24) )
  {
    CurrentIrql = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    if ( !v7
      || (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1124LL) & 0x10000) != 0
      && *(_DWORD *)(a1 + 20) == (unsigned int)PsGetCurrentProcessSessionId() )
    {
      CurrentIrql = KeGetCurrentIrql();
      v10 = *((_DWORD *)KeGetCurrentThread() + 121);
      v12 = sub_14042A5E0(a2, *(_QWORD *)(a1 + 40));
      v9 = KeGetCurrentIrql();
      v11 = *((_DWORD *)KeGetCurrentThread() + 121);
      if ( a3 )
        *a3 = v12;
      v13 = 0;
    }
    else
    {
      v15 = sub_1402DF880(*(_DWORD *)(a1 + 20));
      v16 = (void *)v15;
      if ( !v15 )
        return (unsigned int)-1073741823;
      v13 = sub_1402312E0(v15);
      if ( v13 >= 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v10 = *((_DWORD *)KeGetCurrentThread() + 121);
        v17 = sub_14042A5E0(a2, *(_QWORD *)(a1 + 40));
        v9 = KeGetCurrentIrql();
        v11 = *((_DWORD *)KeGetCurrentThread() + 121);
        if ( a3 )
          *a3 = v17;
        v13 = sub_140231240((__int64)v16, (__int64)v20);
      }
      ObfDereferenceObject(v16);
    }
    if ( CurrentIrql != v9 || v10 != v11 )
    {
      v18 = *(_QWORD *)(a1 + 48);
      if ( v18 )
      {
        sub_1403D99B4(*(_QWORD *)(a1 + 48), (PVOID)(unsigned int)*(__int16 *)(v18 + 2));
        v18 = *(_QWORD *)(a1 + 48);
        if ( *(_WORD *)(v18 + 56) )
        {
          sub_1403D99B4(v18 + 56, (PVOID)2);
          sub_1403D99B4(
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 56LL));
          v18 = *(_QWORD *)(a1 + 48);
        }
      }
      KeBugCheckEx(0xCAu, 0xAuLL, v18, v9, v11);
    }
    return (unsigned int)v13;
  }
  return 3221225485LL;
}
