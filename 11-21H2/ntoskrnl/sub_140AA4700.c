/*
 * XREFs of sub_140AA4700 @ 0x140AA4700
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_140AA4700(__int64 a1)
{
  __int64 result; // rax
  char v2; // dl
  ULONG_PTR v3; // r8
  ULONG_PTR v4; // rdx

  result = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)result == -1073741816 || (_DWORD)result == -1073741788 )
  {
    v2 = *(_BYTE *)(a1 + 24);
    if ( !v2 || (result = (__int64)KeGetCurrentThread(), (*(_DWORD *)(result + 116) & 0x400) != 0) )
    {
      v3 = *(_QWORD *)(a1 + 48);
      if ( v3 )
      {
        if ( v2 && (v3 & 0xFFFFFFFF80000000uLL) != 0 && v3 <= 0xFFFFFFFFFFFFFFFDuLL )
          return sub_140A8C924(0xC4u, 0xF7uLL, v3, *(_QWORD *)(a1 + 32), *(char *)(a1 + 24));
        v4 = 60LL;
      }
      else
      {
        v4 = 245LL;
      }
      return sub_140A8C924(0xC4u, v4, v3, *(_QWORD *)(a1 + 32), 0LL);
    }
  }
  return result;
}
