/*
 * XREFs of ?GetDeviceFromID@Engine@1Spectre@@QEAA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@W4RenderDeviceID@12@@Z @ 0x18003422C
 * Callers:
 *     ?CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@W4ResourceDevicePolicy@12@@Z @ 0x180033200 (-CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@W4ResourceDevicePolicy@12@@Z.c)
 *     ?DetachDevice@ShaderFamily@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z @ 0x180060590 (-DetachDevice@ShaderFamily@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z.c)
 *     ?GetDeviceShader@Shader@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x18008AF20 (-GetDeviceShader@Shader@Engine@Spectre@@QEAA-AV-$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ??1?$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180029F20 (--1-$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA?AV?$shared_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A1C4 (-GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA-AV-$shared_lock@VMutex@Engine@Spectre@@@.c)
 */

_QWORD *__fastcall Spectre::Engine::Engine::GetDeviceFromID(_QWORD *a1, _QWORD *a2, int a3)
{
  __int64 *v6; // rdx
  __int64 *v7; // r9
  _QWORD *v8; // rdx
  _BYTE v10[32]; // [rsp+28h] [rbp-20h] BYREF

  Spectre::Engine::Lockable::GetSharedLockIfNecessary((Spectre::Engine::Lockable *)(a1 + 14), (__int64)v10);
  v6 = (__int64 *)a1[11];
  v7 = (__int64 *)a1[12];
  while ( v6 != v7 )
  {
    if ( (unsigned int)Spectre::Engine::RenderDevice::GetID(*v6) == a3 )
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(a2, v8);
      goto LABEL_7;
    }
    v6 = v8 + 2;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
LABEL_7:
  std::shared_lock<Spectre::Engine::Mutex>::~shared_lock<Spectre::Engine::Mutex>((__int64)v10);
  return a2;
}
