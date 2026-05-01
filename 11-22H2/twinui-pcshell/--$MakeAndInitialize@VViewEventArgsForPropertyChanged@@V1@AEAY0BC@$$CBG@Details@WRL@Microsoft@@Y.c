/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@Z @ 0x1800F61E4
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@wil@@YA?AV?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@AEAY0BC@$$CBG@Z @ 0x1800F5F24 (--$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@wil@@YA-AV-$ComPtr@V.c)
 * Callees:
 *     ??0ViewEventArgsForPropertyChanged@@QEAA@XZ @ 0x1800F6348 (--0ViewEventArgsForPropertyChanged@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z @ 0x1800F6438 (-RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z.c)
 *     ?Attach@?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForPropertyChanged@@@Z @ 0x1800F6490 (-Attach@-$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForProp.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@IEAAKXZ @ 0x180182978 (-InternalRelease@-$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,ViewEventArgsForPropertyChanged,unsigned short const (&)[18]>(
        ViewEventArgsForPropertyChanged **a1,
        const unsigned __int16 *a2)
{
  ViewEventArgsForPropertyChanged *v4; // rax
  ViewEventArgsForPropertyChanged *v5; // rax
  const unsigned __int16 *v6; // rdx
  ViewEventArgsForPropertyChanged *v7; // rbx
  volatile int *v8; // rdx
  int v9; // edi
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  ViewEventArgsForPropertyChanged *v13; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (ViewEventArgsForPropertyChanged *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = ViewEventArgsForPropertyChanged::ViewEventArgsForPropertyChanged(v4);
    v13 = 0LL;
    Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::Attach(&v13, v5);
    v6 = a2;
    v7 = v13;
    v9 = ViewEventArgsForPropertyChanged::RuntimeClassInitialize(v13, v6);
    if ( v9 >= 0 )
    {
      if ( v7 )
      {
        v10 = *((_QWORD *)v7 + 11);
        while ( v10 >= 0 )
        {
          if ( (_DWORD)v10 != 0x7FFFFFFF )
          {
            v11 = v10;
            v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 11, v10 + 1, v10);
            if ( v11 != v10 )
              continue;
          }
          goto LABEL_8;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v10 + 16), v8);
LABEL_8:
        v7 = v13;
      }
      *a1 = v7;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
