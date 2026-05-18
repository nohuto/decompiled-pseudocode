/*
 * XREFs of ??_EQueryPool@RenderDevice@Engine@Spectre@@UEAAPEAXI@Z @ 0x180025E30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1QueryPool@RenderDevice@Engine@Spectre@@UEAA@XZ @ 0x180025B6C (--1QueryPool@RenderDevice@Engine@Spectre@@UEAA@XZ.c)
 */

void **__fastcall Spectre::Engine::RenderDevice::QueryPool::`vector deleting destructor'(void **this, char a2)
{
  Spectre::Engine::RenderDevice::QueryPool::~QueryPool(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
