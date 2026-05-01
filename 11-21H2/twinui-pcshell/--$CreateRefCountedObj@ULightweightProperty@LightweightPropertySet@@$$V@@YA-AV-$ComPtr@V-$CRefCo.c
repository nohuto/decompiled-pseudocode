/*
 * XREFs of ??$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@XZ @ 0x18005CCE8
 * Callers:
 *     ?s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x180020B60 (-s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x18005CA90 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CreateRefCountedObj<LightweightPropertySet::LightweightProperty,>(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rcx

  v2 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 0LL;
    v2[1] = 0LL;
    *((_DWORD *)v2 + 4) = 0;
    *v2 = &CRefCountedObject<LightweightPropertySet::LightweightProperty>::`vftable';
    *((_DWORD *)v2 + 6) = 0;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  if ( v3 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v3 + 8LL))(v3, 0LL);
  return a1;
}
