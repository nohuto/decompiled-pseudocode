/*
 * XREFs of sub_140694FD0 @ 0x140694FD0
 * Callers:
 *     FsRtlAddToTunnelCacheEx @ 0x140694B30 (FsRtlAddToTunnelCacheEx.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140694E60 (FsRtlFindInTunnelCacheEx.c)
 * Callees:
 *     sub_14021D754 @ 0x14021D754 (sub_14021D754.c)
 */

__int64 __fastcall sub_140694FD0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r14
  __int64 v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // rax
  _RTL_SPLAY_LINKS *v8; // rdx
  __int64 v9; // rax
  __int64 result; // rax
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 1;
  v3 = (_QWORD *)(a1 + 64);
  v5 = MEMORY[0xFFFFF78000000014];
  v6 = MEMORY[0xFFFFF78000000014] - (unsigned int)dword_140D3B0D0;
  while ( 1 )
  {
    v7 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    v8 = (_RTL_SPLAY_LINKS *)(v7 - 3);
    v9 = v7[2];
    if ( v9 >= v6 && v9 <= v5 )
      break;
    sub_14021D754(a1, v8, a2, &v11);
  }
  while ( 1 )
  {
    result = *(unsigned __int16 *)(a1 + 80);
    if ( (unsigned int)result <= *(_DWORD *)((char *)&NlsMbCodePageTag + 1) )
      break;
    sub_14021D754(a1, (_RTL_SPLAY_LINKS *)(*v3 - 24LL), a2, &v11);
  }
  return result;
}
