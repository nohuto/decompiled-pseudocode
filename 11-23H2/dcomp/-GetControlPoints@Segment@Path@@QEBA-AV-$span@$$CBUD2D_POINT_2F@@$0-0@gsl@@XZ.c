/*
 * XREFs of ?GetControlPoints@Segment@Path@@QEBA?AV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x1801B3594
 * Callers:
 *     ?GetControlPointCount@CPathData@@QEBAIXZ @ 0x1801B2F04 (-GetControlPointCount@CPathData@@QEBAIXZ.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall Path::Segment::GetControlPoints(_BYTE *a1, _QWORD *a2)
{
  const void *retaddr; // [rsp+28h] [rbp+0h]

  switch ( *a1 )
  {
    case 0:
      goto LABEL_13;
    case 1:
      *a2 = 0LL;
      a2[1] = 0LL;
      return a2;
    case 2:
    case 3:
LABEL_13:
      *a2 = 1LL;
      break;
    case 4:
      *a2 = 2LL;
      break;
    case 5:
      *a2 = 3LL;
      break;
    default:
      ModuleFailFastForHRESULT(-2147024809, retaddr);
  }
  a2[1] = a1 + 8;
  if ( a1 == (_BYTE *)-8LL )
  {
    gsl::details::terminate((gsl::details *)0xFFFFFFFFFFFFFFF8LL);
    JUMPOUT(0x1801B360ELL);
  }
  return a2;
}
