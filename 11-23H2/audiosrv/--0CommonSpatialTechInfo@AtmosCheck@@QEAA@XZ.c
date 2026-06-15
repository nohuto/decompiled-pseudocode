/*
 * XREFs of ??0CommonSpatialTechInfo@AtmosCheck@@QEAA@XZ @ 0x180056D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

AtmosCheck::CommonSpatialTechInfo *__fastcall AtmosCheck::CommonSpatialTechInfo::CommonSpatialTechInfo(
        AtmosCheck::CommonSpatialTechInfo *this)
{
  *(_WORD *)this = 0;
  *(GUID *)((char *)this + 4) = GUID_NULL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  return this;
}
