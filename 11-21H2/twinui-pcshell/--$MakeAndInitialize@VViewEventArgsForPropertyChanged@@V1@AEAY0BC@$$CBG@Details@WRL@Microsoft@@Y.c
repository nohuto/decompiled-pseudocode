/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@Z @ 0x18009B75C
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@wil@@YA?AV?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@AEAY0BC@$$CBG@Z @ 0x18009B710 (--$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@wil@@YA-AV-$ComPtr@V.c)
 * Callees:
 *     ?RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z @ 0x18009B804 (-RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z.c)
 *     ??0ViewEventArgsForPropertyChanged@@QEAA@XZ @ 0x18009C7C4 (--0ViewEventArgsForPropertyChanged@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@IEAAKXZ @ 0x180142B1C (-InternalRelease@-$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,ViewEventArgsForPropertyChanged,unsigned short const (&)[18]>(
        ViewEventArgsForPropertyChanged **a1,
        const unsigned __int16 *a2)
{
  ViewEventArgsForPropertyChanged *v4; // rax
  ViewEventArgsForPropertyChanged *v5; // rbx
  volatile int *v6; // rdx
  int v7; // edi
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  ViewEventArgsForPropertyChanged *v11; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (ViewEventArgsForPropertyChanged *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v11 = ViewEventArgsForPropertyChanged::ViewEventArgsForPropertyChanged(v4);
    v5 = v11;
    v7 = ViewEventArgsForPropertyChanged::RuntimeClassInitialize(v11, a2);
    if ( v7 >= 0 )
    {
      if ( v5 )
      {
        v8 = *((_QWORD *)v5 + 11);
        while ( v8 >= 0 )
        {
          if ( (_DWORD)v8 != 0x7FFFFFFF )
          {
            v9 = v8;
            v8 = _InterlockedCompareExchange64((volatile signed __int64 *)v5 + 11, v8 + 1, v8);
            if ( v9 != v8 )
              continue;
          }
          goto LABEL_8;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v8 + 16), v6);
      }
LABEL_8:
      *a1 = v5;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
