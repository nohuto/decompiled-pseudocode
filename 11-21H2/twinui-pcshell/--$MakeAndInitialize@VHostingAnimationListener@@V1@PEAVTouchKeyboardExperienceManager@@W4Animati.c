/*
 * XREFs of ??$MakeAndInitialize@VHostingAnimationListener@@V1@PEAVTouchKeyboardExperienceManager@@W4AnimationType@@@Details@WRL@Microsoft@@YAJPEAPEAVHostingAnimationListener@@$$QEAPEAVTouchKeyboardExperienceManager@@$$QEAW4AnimationType@@@Z @ 0x180069934
 * Callers:
 *     ??0TouchKeyboardExperienceManager@@QEAA@XZ @ 0x18006A3D8 (--0TouchKeyboardExperienceManager@@QEAA@XZ.c)
 * Callees:
 *     ??0HostingAnimationListener@@QEAA@XZ @ 0x1800699DC (--0HostingAnimationListener@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDWMStoryboardListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EFC80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDWMStoryboardLis.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HostingAnimationListener,HostingAnimationListener,TouchKeyboardExperienceManager *,enum AnimationType>(
        HostingAnimationListener **a1,
        _QWORD *a2,
        int *a3)
{
  unsigned int v3; // ebx
  HostingAnimationListener *v7; // rax
  HostingAnimationListener *v8; // rax
  volatile int *v9; // rdx
  int v10; // ecx
  HostingAnimationListener *v11; // r9
  signed __int64 v12; // rax
  signed __int64 v13; // rtt

  v3 = 0;
  *a1 = 0LL;
  v7 = (HostingAnimationListener *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = HostingAnimationListener::HostingAnimationListener(v7);
    v10 = *a3;
    v11 = v8;
    *((_QWORD *)v8 + 5) = *a2;
    *((_DWORD *)v8 + 12) = v10;
    v12 = *((_QWORD *)v8 + 4);
    while ( v12 >= 0 )
    {
      if ( (_DWORD)v12 != 0x7FFFFFFF )
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 4, v12 + 1, v12);
        if ( v13 != v12 )
          continue;
      }
      goto LABEL_6;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v12 + 16), v9);
LABEL_6:
    *a1 = v11;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDWMStoryboardListener>::Release(v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
