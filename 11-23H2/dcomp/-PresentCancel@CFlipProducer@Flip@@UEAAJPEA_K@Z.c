/*
 * XREFs of ?PresentCancel@CFlipProducer@Flip@@UEAAJPEA_K@Z @ 0x1801AA960
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall Flip::CFlipProducer::PresentCancel(Flip::CFlipProducer *this, unsigned __int64 *a2)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // ebx

  v2 = NtFlipObjectPresentCancel(*((_QWORD *)this + 3), a2);
  v3 = HRESULTFromNTSTATUS(v2);
  v4 = v3;
  if ( v3 < 0 )
    DoStackCaptureDirect(v3, 0xFCu);
  return v4;
}
