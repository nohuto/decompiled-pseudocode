/*
 * XREFs of ??_GPublishWindowsTipService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800CDFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1PublishWindowsTipService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800CDF34 (--1PublishWindowsTipService@Actions@CreativeFramework@@UEAA@XZ.c)
 */

void **__fastcall CreativeFramework::Actions::PublishWindowsTipService::`scalar deleting destructor'(
        void **this,
        char a2)
{
  CreativeFramework::Actions::PublishWindowsTipService::~PublishWindowsTipService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
