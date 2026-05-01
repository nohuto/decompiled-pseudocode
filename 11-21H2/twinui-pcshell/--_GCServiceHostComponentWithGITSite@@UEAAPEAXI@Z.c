/*
 * XREFs of ??_GCServiceHostComponentWithGITSite@@UEAAPEAXI@Z @ 0x18057F91C
 * Callers:
 *     ??_ECServiceHostComponentWithGITSite@@WCI@EAAPEAXI@Z @ 0x18020E790 (--_ECServiceHostComponentWithGITSite@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1800EF978 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CServiceHostComponent@@UEAA@XZ @ 0x18057EF74 (--1CServiceHostComponent@@UEAA@XZ.c)
 */

CServiceHostComponentWithGITSite *__fastcall CServiceHostComponentWithGITSite::`scalar deleting destructor'(
        CServiceHostComponentWithGITSite *this,
        char a2)
{
  CServiceHostComponent::~CServiceHostComponent((CServiceHostComponentWithGITSite *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
