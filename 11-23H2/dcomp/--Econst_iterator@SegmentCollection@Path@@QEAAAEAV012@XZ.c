/*
 * XREFs of ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x1801B2CE8
 * Callers:
 *     ?GetControlPointCount@CPathData@@QEBAIXZ @ 0x1801B2F04 (-GetControlPointCount@CPathData@@QEBAIXZ.c)
 *     ?PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z @ 0x1801B3254 (-PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x180077EE4 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 */

char **__fastcall Path::SegmentCollection::const_iterator::operator++(char **a1)
{
  *a1 += (unsigned int)Path::Segment::GetSize(**a1);
  return a1;
}
