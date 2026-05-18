/*
 * XREFs of ??_EDeviceShaderPipeline@Engine@Spectre@@UEAAPEAXI@Z @ 0x18008ABE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceShaderPipeline@Engine@Spectre@@UEAA@XZ @ 0x18008A94C (--1DeviceShaderPipeline@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::DeviceShaderPipeline *__fastcall Spectre::Engine::DeviceShaderPipeline::`vector deleting destructor'(
        Spectre::Engine::DeviceShaderPipeline *this,
        char a2)
{
  Spectre::Engine::DeviceShaderPipeline::~DeviceShaderPipeline(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
