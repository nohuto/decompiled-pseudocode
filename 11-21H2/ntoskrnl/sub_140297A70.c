/*
 * XREFs of sub_140297A70 @ 0x140297A70
 * Callers:
 *     sub_1407035C0 @ 0x1407035C0 (sub_1407035C0.c)
 * Callees:
 *     sub_140294D90 @ 0x140294D90 (sub_140294D90.c)
 *     sub_140298AF8 @ 0x140298AF8 (sub_140298AF8.c)
 */

char __fastcall sub_140297A70(ULONG64 *a1, ULONG64 a2, ULONG64 *a3, ULONG64 *a4)
{
  __int64 v9; // r8
  int v10; // ecx
  struct _KTHREAD *CurrentThread; // r10
  unsigned int v12; // r9d
  ULONG64 v13; // rcx
  ULONG64 v14; // rdx
  char v15; // al
  char v16; // r8
  int v17; // ecx
  ULONG64 v18; // rcx
  ULONG64 v19; // rax
  __int64 v20; // [rsp+20h] [rbp-18h] BYREF
  __int64 v21; // [rsp+28h] [rbp-10h] BYREF
  unsigned int v22; // [rsp+48h] [rbp+10h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  if ( (a2 & 7) != 0 )
    return 0;
  if ( a2 >= *a1 && a2 < *a3 )
    return 1;
  if ( *a1 < 0xFFFF800000000000uLL )
    return 0;
  sub_140294D90((__int64)&v22, (__int64)&v21, (__int64)&v20);
  if ( v22 <= 9 )
  {
    v10 = 929;
    if ( _bittest(&v10, v22) )
      return 0;
  }
  CurrentThread = KeGetCurrentThread();
  v12 = v22;
  if ( v22 != 1 )
  {
    if ( (KeGetPcr()[36].Unused0[2] & 1) != 0 && CurrentThread != *((struct _KTHREAD **)KeGetCurrentPrcb() + 3) )
    {
      v13 = KeGetPcr()[36].Unused[0] + 80;
      v14 = v13 - (unsigned int)dword_140D05050;
      if ( v14 <= a2 && a2 < v13 )
      {
        *a3 = v13;
        *a1 = v14;
        return 1;
      }
    }
    v12 = v22;
  }
  v15 = 0;
  if ( !*a4 )
  {
    LOBYTE(v9) = 1;
    sub_140298AF8(CurrentThread, a4, v9);
    v15 = v16;
  }
  if ( v12 > 0xA || (v17 = 1090, !_bittest(&v17, v12)) || !v15 )
  {
    if ( !(unsigned __int8)sub_140298AF8(CurrentThread, a4, 0LL) )
      return 0;
  }
  v18 = a4[1];
  v19 = *a4;
  if ( a2 < v18 || a2 >= v19 )
    return 0;
  *a1 = v18;
  *a3 = v19;
  return 1;
}
