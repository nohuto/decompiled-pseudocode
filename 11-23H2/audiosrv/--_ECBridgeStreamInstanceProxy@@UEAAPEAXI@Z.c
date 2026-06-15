/*
 * XREFs of ??_ECBridgeStreamInstanceProxy@@UEAAPEAXI@Z @ 0x1800D8C30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1CBridgeStreamInstanceProxy@@UEAA@XZ @ 0x180104858 (--1CBridgeStreamInstanceProxy@@UEAA@XZ.c)
 */

CBridgeStreamInstanceProxy *__fastcall CBridgeStreamInstanceProxy::`vector deleting destructor'(
        CBridgeStreamInstanceProxy *this,
        char a2)
{
  CBridgeStreamInstanceProxy::~CBridgeStreamInstanceProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
