/*
 * XREFs of ?ReleaseMilResource@CDevice@DirectComposition@@UEAAXPEAUIUnknown@@@Z @ 0x1800F3D80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Attach@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z @ 0x18009AC74 (-Attach@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1800ED0A0 (--$_Emplace_reallocate@V-$ComPtr@UIUnknown@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIUnknown@@@WRL@.c)
 */

void __fastcall DirectComposition::CDevice::ReleaseMilResource(DirectComposition::CDevice *this, struct IUnknown *a2)
{
  __int64 *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::Attach(&v5, (__int64)a2);
    v3 = (__int64 *)*((_QWORD *)this + 79);
    if ( v3 == *((__int64 **)this + 80) )
    {
      std::vector<Microsoft::WRL::ComPtr<IUnknown>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IUnknown>>(
        (const char *)this + 624,
        (__int64)v3,
        &v5);
    }
    else
    {
      *v3 = 0LL;
      if ( v3 != &v5 )
      {
        v4 = v5;
        v5 = 0LL;
        *v3 = v4;
      }
      *((_QWORD *)this + 79) += 8LL;
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v5);
  }
}
