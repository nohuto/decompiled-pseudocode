/*
 * XREFs of ??$?0V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@$0A@@?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@std@@QEAA@PEAULightConstants@Engine@Spectre@@$$QEAV?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@1@@Z @ 0x18007C758
 * Callers:
 *     ??0StandardShaderExtension@Engine@Spectre@@QEAA@XZ @ 0x18007CA64 (--0StandardShaderExtension@Engine@Spectre@@QEAA@XZ.c)
 *     ??0BackgroundUnlitShaderExtension@Engine@Spectre@@QEAA@XZ @ 0x18007FD04 (--0BackgroundUnlitShaderExtension@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18001DD9C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::unique_ptr<Spectre::Engine::LightConstants,std::function<void (Spectre::Engine::LightConstants *)>>::unique_ptr<Spectre::Engine::LightConstants,std::function<void (Spectre::Engine::LightConstants *)>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 v7; // rdx

  *(_QWORD *)(a1 + 56) = 0LL;
  v4 = *(_QWORD *)(a3 + 56);
  if ( v4 )
  {
    if ( v4 == a3 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      std::_Func_class<void,>::_Tidy(a3, v7);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a3 + 56) = 0LL;
    }
  }
  *(_QWORD *)(a1 + 64) = a2;
  return a1;
}
