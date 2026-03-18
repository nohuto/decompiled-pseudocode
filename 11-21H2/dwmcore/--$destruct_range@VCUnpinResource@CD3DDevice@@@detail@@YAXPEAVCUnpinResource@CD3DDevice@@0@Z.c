/*
 * XREFs of ??$destruct_range@VCUnpinResource@CD3DDevice@@@detail@@YAXPEAVCUnpinResource@CD3DDevice@@0@Z @ 0x180008A14
 * Callers:
 *     ?clear_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800059FC (-clear_region@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DDev.c)
 *     ?reserve_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCUnpinResource@CD3DDevice@@_K0@Z @ 0x180008908 (-reserve_region@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DD.c)
 * Callees:
 *     ??1CUnpinResource@CD3DDevice@@QEAA@XZ @ 0x180008A4C (--1CUnpinResource@CD3DDevice@@QEAA@XZ.c)
 */

void __fastcall detail::destruct_range<CD3DDevice::CUnpinResource>(
        CD3DDevice::CUnpinResource *this,
        CD3DDevice::CUnpinResource *a2)
{
  CD3DDevice::CUnpinResource *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CD3DDevice::CUnpinResource::~CUnpinResource(v3);
      v3 = (CD3DDevice::CUnpinResource *)((char *)v3 + 32);
    }
    while ( v3 != a2 );
  }
}
