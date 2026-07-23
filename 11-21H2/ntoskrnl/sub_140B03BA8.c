/*
 * XREFs of sub_140B03BA8 @ 0x140B03BA8
 * Callers:
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     sub_140354698 @ 0x140354698 (sub_140354698.c)
 *     sub_1403DBF54 @ 0x1403DBF54 (sub_1403DBF54.c)
 *     sub_140A59154 @ 0x140A59154 (sub_140A59154.c)
 */

__int64 sub_140B03BA8()
{
  unsigned int v0; // ebx
  __int64 result; // rax
  unsigned __int16 i; // bx
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+2Ch] [rbp-Ch]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v0 = 0;
  for ( result = (unsigned int)dword_140D06884; v0 < (unsigned int)dword_140D06884; ++v0 )
  {
    sub_140A59154(qword_140D088C0[v0], 0);
    result = (unsigned int)dword_140D06884;
  }
  for ( i = 0; i < (unsigned __int16)word_140D05000; ++i )
  {
    v5 = 0;
    v3 = qword_140D31700[i];
    v4 = *(_DWORD *)(v3 + 16);
    while ( 1 )
    {
      result = sub_140354698((__int64)&v3, &v6);
      if ( (_DWORD)result )
        break;
      sub_1403DBF54(v6);
    }
  }
  return result;
}
