/*
 * XREFs of ??0SimpleCancellationToken@Internal@Utils@Spectre@@QEAA@XZ @ 0x1800DFE7C
 * Callers:
 *     ?MakeCancellationToken@Utils@Spectre@@YA?AV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@XZ @ 0x1800E0304 (-MakeCancellationToken@Utils@Spectre@@YA-AV-$shared_ptr@VICancellationToken@Utils@Spectre@@@std@.c)
 * Callees:
 *     ??0?$map@HV?$function@$$A6AXXZ@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$function@$$A6AXXZ@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800DFDA0 (--0-$map@HV-$function@$$A6AXXZ@std@@U-$less@H@2@V-$allocator@U-$pair@$$CBHV-$function@$$A6AXXZ@s.c)
 */

// Hidden C++ exception states: #wind=2
Spectre::Utils::Internal::SimpleCancellationToken *__fastcall Spectre::Utils::Internal::SimpleCancellationToken::SimpleCancellationToken(
        Spectre::Utils::Internal::SimpleCancellationToken *this)
{
  *(_QWORD *)this = &Spectre::Utils::Internal::SimpleCancellationToken::`vftable';
  _Mtx_init_in_situ((Spectre::Utils::Internal::SimpleCancellationToken *)((char *)this + 8), 2);
  *((_DWORD *)this + 22) = 0;
  std::map<int,std::function<void (void)>>::map<int,std::function<void (void)>>((_QWORD *)this + 12);
  *((_BYTE *)this + 112) = 0;
  return this;
}
