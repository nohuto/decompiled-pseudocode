/*
 * XREFs of ??_GCServiceHostComponentWithGITSite@@UEAAPEAXI@Z @ 0x18063E91C
 * Callers:
 *     ??_ECServiceHostComponentWithGITSite@@WCI@EAAPEAXI@Z @ 0x1802AA9E0 (--_ECServiceHostComponentWithGITSite@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1800FFD58 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CServiceHostComponent@@UEAA@XZ @ 0x18063DF84 (--1CServiceHostComponent@@UEAA@XZ.c)
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
