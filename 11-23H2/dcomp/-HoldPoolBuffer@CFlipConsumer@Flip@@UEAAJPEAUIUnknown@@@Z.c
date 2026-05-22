/*
 * XREFs of ?HoldPoolBuffer@CFlipConsumer@Flip@@UEAAJPEAUIUnknown@@@Z @ 0x1801AB300
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?GetIdForBuffer@CFlipConsumer@Flip@@IEAAJPEAUIUnknown@@PEA_K@Z @ 0x1801AB244 (-GetIdForBuffer@CFlipConsumer@Flip@@IEAAJPEAUIUnknown@@PEA_K@Z.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall Flip::CFlipConsumer::HoldPoolBuffer(Flip::CFlipConsumer *this, struct IUnknown *a2)
{
  int IdForBuffer; // eax
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // edx
  unsigned __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  IdForBuffer = Flip::CFlipConsumer::GetIdForBuffer(this, a2, &v8);
  v4 = IdForBuffer;
  if ( IdForBuffer < 0 )
  {
    v6 = 174;
    goto LABEL_5;
  }
  v5 = NtFlipObjectConsumerAdjustUsageReference(*((_QWORD *)this + 3), &v8, 1LL);
  IdForBuffer = HRESULTFromNTSTATUS(v5);
  v4 = IdForBuffer;
  if ( IdForBuffer < 0 )
  {
    v6 = 178;
LABEL_5:
    DoStackCaptureDirect(IdForBuffer, v6);
  }
  return v4;
}
