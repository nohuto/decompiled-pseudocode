/*
 * XREFs of RtlpHpRegisterEnvironment @ 0x1800555C0
 * Callers:
 *     RtlpHpHeapCreate @ 0x180054CB4 (RtlpHpHeapCreate.c)
 *     RtlpHpHeapDestroy @ 0x180056C28 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x180055694 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x180056BC8 (RtlpHpVaMgrCtxAllocatorDereference.c)
 */

__int64 __fastcall RtlpHpRegisterEnvironment(__int128 *a1, int a2)
{
  __int128 v2; // xmm0
  unsigned int v3; // ebx
  __int64 v5; // r8
  __int64 v6; // r8
  int v7; // eax
  __int128 v9; // [rsp+20h] [rbp-38h]
  _DWORD v10[3]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+3Ch] [rbp-1Ch]
  __int64 v12; // [rsp+40h] [rbp-18h]

  v2 = *a1;
  v3 = 0;
  v5 = 0LL;
  v11 = 0;
  v9 = v2;
  if ( BYTE3(v2) )
    v10[0] = BYTE3(v2) - 1;
  else
    v10[0] = -1;
  v10[2] = BYTE2(v2);
  v10[1] = BYTE1(v2);
  if ( (v2 & 8) != 0 )
  {
    v5 = 1LL;
    v11 = 1;
  }
  v12 = *((_QWORD *)&v2 + 1);
  if ( a2 )
  {
    v6 = 0x40000000LL;
    if ( BYTE1(v2) != 4 )
      v6 = 0x200000LL;
    v7 = RtlpHpVaMgrCtxAllocatorReference(&unk_18017B768, v10, v6);
    if ( v7 == -1 )
    {
      return (unsigned int)-1073741670;
    }
    else
    {
      BYTE3(v9) = v7 + 1;
      *a1 = v9;
    }
  }
  else
  {
    RtlpHpVaMgrCtxAllocatorDereference(&unk_18017B768, v10, v5);
  }
  return v3;
}
