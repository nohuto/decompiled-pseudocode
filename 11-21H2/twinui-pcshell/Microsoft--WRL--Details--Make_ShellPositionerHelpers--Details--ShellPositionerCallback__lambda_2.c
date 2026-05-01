/*
 * XREFs of Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_288154352f0edaa8a1b00de8c47b1028_____lambda_288154352f0edaa8a1b00de8c47b1028___ @ 0x180056154
 * Callers:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_288154352f0edaa8a1b00de8c47b1028___ @ 0x180056048 (ShellPositionerHelpers--PerformCallbackOnView__lambda_288154352f0edaa8a1b00de8c47b1028___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800ED6EC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositionerCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141380 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositioner.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_288154352f0edaa8a1b00de8c47b1028_____lambda_288154352f0edaa8a1b00de8c47b1028___(
        _QWORD *a1,
        _DWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx

  *a1 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>(v4);
    v5[6] = 0LL;
    if ( v5 + 6 != (_QWORD *)a2 )
    {
      v5[6] = *(_QWORD *)a2;
      *(_QWORD *)a2 = 0LL;
    }
    *((_DWORD *)v5 + 14) = a2[2];
    *v5 = off_180639CF0;
    v5[1] = &ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_fc0143a4fb0c4cebe9d0a78f532496be_>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IShellPositionerCallback,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
