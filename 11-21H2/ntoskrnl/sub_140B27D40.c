/*
 * XREFs of sub_140B27D40 @ 0x140B27D40
 * Callers:
 *     sub_140B27B30 @ 0x140B27B30 (sub_140B27B30.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A819C8 @ 0x140A819C8 (sub_140A819C8.c)
 */

__int64 sub_140B27D40()
{
  __int64 result; // rax
  int v1; // ebx
  unsigned int v2; // esi
  bool v3; // r14
  unsigned int i; // edi
  ULONG v5; // r8d
  unsigned int v6; // edx

  result = (unsigned int)dword_140D57508;
  v1 = 0;
  if ( dword_140D57508 )
  {
    if ( (unsigned int)dword_140D57508 > 0x200 )
    {
      LODWORD(result) = 512;
      dword_140D57508 = 512;
    }
    dword_140D576E0 = 512;
    v2 = dword_140D5752C + 2;
    if ( (unsigned int)(dword_140D5752C + 2) > 0x200 )
      v2 = 512;
    qword_140D576E8 = (__int64)&unk_140D592C0;
    v3 = 2 * (int)result > (unsigned int)dword_140D5752C;
    memset(&unk_140D592C0, 0, 0x40uLL);
    for ( i = 0; i < dword_140D57508; ++i )
    {
      v5 = sub_140A819C8(1u, v2 - 1);
      if ( _bittest((const signed __int32 *)qword_140D576E8, v5) )
      {
        if ( v3 )
        {
          ++v1;
        }
        else
        {
          v6 = v5;
          while ( 1 )
          {
            v6 = (v6 + 1) % v2;
            if ( !v6 )
              v6 = 1;
            if ( !_bittest((const signed __int32 *)qword_140D576E8, v6) )
              break;
            if ( v6 == v5 )
              goto LABEL_20;
          }
          _bittestandset((signed __int32 *)qword_140D576E8, v6);
          if ( v6 == v5 )
            break;
        }
      }
      else
      {
        _bittestandset((signed __int32 *)qword_140D576E8, v5);
      }
    }
LABEL_20:
    dword_140D57508 -= v1;
    return 1LL;
  }
  return result;
}
