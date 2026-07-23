/*
 * XREFs of ExQueryPoolBlockSize @ 0x14063B220
 * Callers:
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     sub_140366C48 @ 0x140366C48 (sub_140366C48.c)
 *     sub_140366FB0 @ 0x140366FB0 (sub_140366FB0.c)
 *     sub_140461DE4 @ 0x140461DE4 (sub_140461DE4.c)
 *     sub_14063BC14 @ 0x14063BC14 (sub_14063BC14.c)
 */

SIZE_T __stdcall ExQueryPoolBlockSize(PVOID PoolBlock, PBOOLEAN QuotaCharged)
{
  BOOLEAN v2; // bl
  unsigned __int64 v5; // rax
  _DWORD *v6; // rcx
  unsigned __int64 v8; // rdx
  char v9; // al
  __int64 v10; // r8
  __int64 v11; // [rsp+40h] [rbp-18h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  int v14; // [rsp+78h] [rbp+20h]

  v2 = 0;
  v12 = 0LL;
  v11 = 0LL;
  LODWORD(v13) = 0;
  v14 = 0;
  v5 = sub_140366C48((ULONG_PTR)PoolBlock);
  if ( (unsigned int)sub_140461DE4(v5) )
  {
    *QuotaCharged = 0;
    v6 = (_DWORD *)((unsigned __int64)PoolBlock & 0xFFFFFFFFFFFFF000uLL);
    if ( ((unsigned __int16)PoolBlock & 0xFFF) == 0 )
      v6 = (_DWORD *)(((unsigned __int64)PoolBlock & 0xFFFFFFFFFFFFF000uLL) + 4080);
    return *v6 & 0xFFFLL;
  }
  else if ( ((unsigned __int16)PoolBlock & 0xFFF) != 0 )
  {
    v8 = (unsigned __int64)PoolBlock - 16;
    v9 = *((char *)PoolBlock - 13);
    v10 = 16LL * (unsigned __int8)*((_WORD *)PoolBlock - 7);
    if ( (v9 & 8) != 0 )
    {
      if ( (v9 & 4) != 0 )
        v8 -= 16LL * (unsigned __int8)*(_WORD *)v8;
      if ( (v8 ^ qword_140D06E00 ^ *(_QWORD *)(v8 + 8)) - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        v2 = 1;
    }
    *QuotaCharged = v2;
    return v10 - 16;
  }
  else
  {
    sub_140366FB0((unsigned __int64)PoolBlock);
    sub_14063BC14((ULONG_PTR)PoolBlock, (__int64)&v13, (__int64)&v12, (__int64)&v11);
    *QuotaCharged = (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL;
    return 4096LL;
  }
}
