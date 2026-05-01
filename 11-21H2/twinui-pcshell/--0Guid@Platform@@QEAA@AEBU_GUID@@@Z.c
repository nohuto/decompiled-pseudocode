/*
 * XREFs of ??0Guid@Platform@@QEAA@AEBU_GUID@@@Z @ 0x180013EB8
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1800135A8 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall Platform::Guid::Guid(struct _GUID *this, const struct _GUID *a2)
{
  *this = *a2;
  return this;
}
