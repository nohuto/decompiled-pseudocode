/*
 * XREFs of sub_140AF6988 @ 0x140AF6988
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14058617C @ 0x14058617C (sub_14058617C.c)
 *     sub_14058732C @ 0x14058732C (sub_14058732C.c)
 */

unsigned __int64 __fastcall sub_140AF6988(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rcx
  unsigned __int64 *v4; // rcx
  int v5; // edi
  ULONG_PTR v6; // r8

  result = *(_QWORD *)(a1 + 360);
  if ( (result & 1) != 0 )
  {
    if ( result == 1 )
      return result;
    v2 = result ^ ((a1 + 352) | 1);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 360);
  }
  while ( v2 )
  {
    v5 = *(_DWORD *)(v2 + 24);
    if ( (unsigned int)(v5 - 38) <= 1 )
    {
      v6 = *(_QWORD *)(v2 + 32);
      if ( !v6 || (v6 & 0x3FFFF) != 0 || (*(_DWORD *)(v2 + 40) & 0x3FFFF) != 0 )
        KeBugCheckEx(0x1Au, 0x30000000uLL, v6, *(_QWORD *)(v2 + 40), *(int *)(v2 + 24));
      if ( (unsigned int)sub_14058732C()
        && (int)sub_14058617C((__int64)&StartContext, v2, (unsigned int)(*(_DWORD *)(v2 + 24) != 38) + 1, 0) >= 0 )
      {
        if ( v5 == 38 )
        {
          *(_DWORD *)(v2 + 24) = 24;
        }
        else if ( v5 == 39 )
        {
          *(_DWORD *)(v2 + 24) = 2;
        }
      }
    }
    result = *(_QWORD *)(v2 + 8);
    v3 = v2;
    if ( result )
    {
      v4 = *(unsigned __int64 **)result;
      v2 = *(_QWORD *)(v2 + 8);
      if ( *(_QWORD *)result )
      {
        do
        {
          result = *v4;
          v2 = (__int64)v4;
          v4 = (unsigned __int64 *)result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        v2 = *(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v2 || *(_QWORD *)v2 == v3 )
          break;
        v3 = v2;
      }
    }
  }
  return result;
}
