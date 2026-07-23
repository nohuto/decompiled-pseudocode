/*
 * XREFs of sub_140817BC8 @ 0x140817BC8
 * Callers:
 *     sub_140818A90 @ 0x140818A90 (sub_140818A90.c)
 * Callees:
 *     sub_1402E0A04 @ 0x1402E0A04 (sub_1402E0A04.c)
 *     sub_140817CD8 @ 0x140817CD8 (sub_140817CD8.c)
 *     sub_140818BFC @ 0x140818BFC (sub_140818BFC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140817BC8(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rbx
  __int64 Pool2; // rax
  _WORD *v5; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r9
  _WORD *v8; // r8
  char *v9; // r10
  __int16 v10; // ax
  _WORD *v11; // rax
  unsigned int v12; // ebx

  v1 = -1LL;
  do
    ++v1;
  while ( *(_WORD *)(a1 + 2 * v1) );
  v3 = (unsigned int)(2 * v1 + 104);
  Pool2 = ExAllocatePool2(256LL, v3, 1682330192LL);
  v5 = (_WORD *)Pool2;
  if ( Pool2 )
  {
    v6 = (unsigned __int64)(unsigned int)v3 >> 1;
    if ( v6 )
    {
      v7 = 2147483646 - v6;
      v8 = (_WORD *)Pool2;
      v9 = (char *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\" - Pool2;
      do
      {
        if ( !(v7 + v6) )
          break;
        v10 = *(_WORD *)((char *)v8 + (_QWORD)v9);
        if ( !v10 )
          break;
        *v8++ = v10;
        --v6;
      }
      while ( v6 );
      v11 = v8 - 1;
      if ( v6 )
        v11 = v8;
      *v11 = 0;
    }
    sub_1402E0A04(v5, v3, a1);
    if ( (unsigned int)sub_140818BFC() )
    {
      wcscpy(&xmmword_140C166EC, (const wchar_t *)&xmmword_140870900);
      v12 = sub_140817CD8(&xmmword_140C166EC);
    }
    else
    {
      v12 = -1073741823;
    }
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v12;
}
