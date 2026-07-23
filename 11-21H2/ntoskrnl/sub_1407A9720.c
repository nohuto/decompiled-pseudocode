/*
 * XREFs of sub_1407A9720 @ 0x1407A9720
 * Callers:
 *     sub_1407A9220 @ 0x1407A9220 (sub_1407A9220.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeCreateClientSecurityEx @ 0x1407275D0 (SeCreateClientSecurityEx.c)
 *     SeDeleteClientSecurity @ 0x1407A8070 (SeDeleteClientSecurity.c)
 */

char __fastcall sub_1407A9720(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // r8d
  char v13; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-88h]
  __int64 v19; // [rsp+28h] [rbp-80h]
  _QWORD v20[10]; // [rsp+50h] [rbp-58h] BYREF

  memset(v20, 0, 0x44uLL);
  v8 = 0;
  v9 = 0LL;
  LODWORD(v10) = *(_DWORD *)(a2 + 40);
  if ( (v10 & 0x80u) != 0LL )
    return v10;
  v10 = *(_QWORD *)(a2 + 136);
  if ( v10 )
  {
    if ( *(int *)(v10 + 36) < 1 )
      return v10;
    v9 = *(_QWORD *)(v10 + 48);
    v13 = 0;
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 24);
    LOBYTE(v10) = *(_DWORD *)(a1 + 416) & 6;
    if ( (_BYTE)v10 != 2 )
      return v10;
    if ( !v11 )
      return v10;
    v12 = *(_DWORD *)(v11 + 416);
    LOBYTE(v10) = v12 & 6;
    if ( (v12 & 6) != 4 )
      return v10;
    if ( (v12 & 0x400) == 0 )
    {
      v9 = *(_QWORD *)(v11 + 80);
      if ( !v9 )
        return v10;
      goto LABEL_8;
    }
    v16 = *(_QWORD *)(a2 + 32);
    if ( !v16 )
      return v10;
    LODWORD(v10) = SeCreateClientSecurityEx(v16, v11 + 260, 0, (__int64)v20);
    v8 = v10;
    if ( (int)v10 < 0 )
    {
LABEL_8:
      v13 = 0;
      if ( v8 < 0 )
        return v10;
      goto LABEL_9;
    }
    v9 = v20[2];
    v13 = 1;
  }
LABEL_9:
  v19 = *(_QWORD *)(v9 + 24);
  v18 = *(_QWORD *)(v9 + 16);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v9 + 48), 1u);
  v15 = *(_QWORD *)(v9 + 56);
  ExReleaseResourceLite(*(PERESOURCE *)(v9 + 48));
  KeLeaveCriticalRegion();
  if ( v13 )
    SeDeleteClientSecurity((__int64)v20);
  *a3 = v18;
  LOBYTE(v10) = v19;
  a3[1] = v19;
  a3[2] = v15;
  *a4 |= 0x8000000u;
  return v10;
}
