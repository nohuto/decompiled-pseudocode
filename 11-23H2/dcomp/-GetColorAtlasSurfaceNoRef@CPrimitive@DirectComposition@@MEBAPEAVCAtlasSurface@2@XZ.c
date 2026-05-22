/*
 * XREFs of ?GetColorAtlasSurfaceNoRef@CPrimitive@DirectComposition@@MEBAPEAVCAtlasSurface@2@XZ @ 0x1800F7C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DirectComposition::CAtlasSurface *__fastcall DirectComposition::CPrimitive::GetColorAtlasSurfaceNoRef(
        DirectComposition::CPrimitive *this)
{
  struct DirectComposition::CAtlasSurface *result; // rax

  result = (struct DirectComposition::CAtlasSurface *)*((_QWORD *)this + 27);
  if ( result )
    return (struct DirectComposition::CAtlasSurface *)*((_QWORD *)result + 25);
  return result;
}
