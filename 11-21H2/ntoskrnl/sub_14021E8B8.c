/*
 * XREFs of sub_14021E8B8 @ 0x14021E8B8
 * Callers:
 *     sub_14021E048 @ 0x14021E048 (sub_14021E048.c)
 *     sub_14021E6C4 @ 0x14021E6C4 (sub_14021E6C4.c)
 *     sub_14021F198 @ 0x14021F198 (sub_14021F198.c)
 *     sub_1403750E4 @ 0x1403750E4 (sub_1403750E4.c)
 *     FsRtlGetNextFileLock @ 0x140541AD0 (FsRtlGetNextFileLock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14021E8B8(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3, _QWORD *a4, _BYTE *a5)
{
  __int64 v5; // rbx
  __int64 v8; // rdx
  unsigned __int64 v9; // r11
  _QWORD *v10; // r8
  unsigned __int64 v11; // rax

  v5 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v8 = 0LL;
  while ( a1 )
  {
    v9 = *a2;
    v5 = a1 - 24;
    v10 = *(_QWORD **)(a1 - 24);
    if ( *(_QWORD *)(a1 - 24 + 16) >= *a2 && ((v11 = v10[1]) != 0 || v10[2]) )
    {
      if ( v11 <= *a3 && (*a3 != -1LL || v9) )
      {
        if ( v11 <= v9 )
          break;
        v8 = a1 - 24;
      }
      if ( a4 )
        *a4 = a1;
      if ( a5 )
        *a5 = 1;
      a1 = *(_QWORD *)(a1 + 8);
    }
    else
    {
      if ( v10[6] == *a3 && v10[1] == v9 )
        break;
      if ( a4 )
        *a4 = a1;
      if ( a5 )
        *a5 = 0;
      a1 = *(_QWORD *)(a1 + 16);
    }
  }
  if ( a1 )
    v8 = v5;
  if ( v8 )
    return v8 + 24;
  else
    return 0LL;
}
