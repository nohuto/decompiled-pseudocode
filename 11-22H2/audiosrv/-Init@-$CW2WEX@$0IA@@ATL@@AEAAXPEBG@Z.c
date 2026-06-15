/*
 * XREFs of ?Init@?$CW2WEX@$0IA@@ATL@@AEAAXPEBG@Z @ 0x180051F84
 * Callers:
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x180050574 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 * Callees:
 *     memcpy_s @ 0x1800106EC (memcpy_s.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE814 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

int __fastcall ATL::CW2WEX<128>::Init(void **a1, _WORD *a2)
{
  _UNKNOWN **v2; // rax
  __int64 v5; // rbx
  int v6; // ebx
  void *v7; // rdi
  void *v8; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v2 = &retaddr;
  if ( a2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
    v6 = v5 + 1;
    v7 = a1 + 1;
    if ( !a1 || v6 < 0 || a1 == (void **)-8LL )
      ATL::AtlThrowImpl(-2147024809);
    if ( *a1 == v7 )
    {
      if ( v6 > 128 )
        v7 = calloc(v6, 2uLL);
    }
    else
    {
      v8 = *a1;
      if ( v6 <= 128 )
      {
        free(v8);
      }
      else
      {
        v7 = (void *)_o__recalloc(v8, v6, 2LL);
        if ( !v7 )
          ATL::AtlThrowImpl(-2147024882);
      }
    }
    *a1 = v7;
    if ( !v7 )
      goto LABEL_25;
    LODWORD(v2) = memcpy_s(v7, 2LL * v6, a2, 2LL * v6);
    switch ( (_DWORD)v2 )
    {
      case 0:
        return (int)v2;
      case 0xC:
LABEL_25:
        ATL::AtlThrowImpl(-2147024882);
      case 0x16:
      case 0x22:
        ATL::AtlThrowImpl(-2147024809);
    }
    if ( (_DWORD)v2 != 80 )
      ATL::AtlThrowImpl(-2147467259);
  }
  else
  {
    *a1 = 0LL;
  }
  return (int)v2;
}
