/*
 * XREFs of ??_GModuleCommandResult@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140074C20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??1ModuleCommandResult@Devices@Media@Windows@@MEAA@XZ @ 0x140073C68 (--1ModuleCommandResult@Devices@Media@Windows@@MEAA@XZ.c)
 */

Windows::Media::Devices::ModuleCommandResult *__fastcall Windows::Media::Devices::ModuleCommandResult::`scalar deleting destructor'(
        Windows::Media::Devices::ModuleCommandResult *this,
        char a2)
{
  Windows::Media::Devices::ModuleCommandResult::~ModuleCommandResult(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
