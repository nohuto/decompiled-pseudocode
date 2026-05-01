/*
 * XREFs of ??1UMSFreeThreadProxy@details@Concurrency@@UEAA@XZ @ 0x18001ADD0
 * Callers:
 *     sub_18001AF90 @ 0x18001AF90 (sub_18001AF90.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::UMSFreeThreadProxy::~UMSFreeThreadProxy(__int64 this)
{
  *(_QWORD *)this = &off_180024F88;
  *(_QWORD *)(this + 8) = off_180024F68;
  *(_QWORD *)(this + 16) = &off_180025020;
  sub_18001ADA8(this);
}
