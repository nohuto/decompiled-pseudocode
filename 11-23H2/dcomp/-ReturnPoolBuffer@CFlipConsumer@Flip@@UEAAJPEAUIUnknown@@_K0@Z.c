/*
 * XREFs of ?ReturnPoolBuffer@CFlipConsumer@Flip@@UEAAJPEAUIUnknown@@_K0@Z @ 0x1801ABDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?EnsureSynchronizationContext@CFlipConsumer@Flip@@IEAAJPEAUIUnknown@@@Z @ 0x1801AAFDC (-EnsureSynchronizationContext@CFlipConsumer@Flip@@IEAAJPEAUIUnknown@@@Z.c)
 *     ?GetIdForBuffer@CFlipConsumer@Flip@@IEAAJPEAUIUnknown@@PEA_K@Z @ 0x1801AB244 (-GetIdForBuffer@CFlipConsumer@Flip@@IEAAJPEAUIUnknown@@PEA_K@Z.c)
 *     ?Present@CSynchronizationContext@Flip@@QEAAJPEAUIUnknown@@_KPEAX@Z @ 0x1801AC3E4 (-Present@CSynchronizationContext@Flip@@QEAAJPEAUIUnknown@@_KPEAX@Z.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall Flip::CFlipConsumer::ReturnPoolBuffer(
        Flip::CSynchronizationContext **this,
        struct IUnknown *a2,
        unsigned __int64 a3,
        struct IUnknown *a4)
{
  int IdForBuffer; // eax
  __int64 v9; // r8
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // edx
  int v13; // eax
  HANDLE hObject; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v16[2]; // [rsp+28h] [rbp-10h] BYREF

  hObject = 0LL;
  IdForBuffer = Flip::CFlipConsumer::GetIdForBuffer((Flip::CFlipConsumer *)this, a4, v16);
  v10 = IdForBuffer;
  if ( IdForBuffer < 0 )
  {
    v12 = 194;
  }
  else if ( a2 )
  {
    IdForBuffer = Flip::CFlipConsumer::EnsureSynchronizationContext((Flip::CFlipConsumer *)this, a4, v9);
    v10 = IdForBuffer;
    if ( IdForBuffer < 0 )
    {
      v12 = 199;
    }
    else
    {
      v11 = NtTokenManagerCreateFlipObjectReturnTokenHandle(this[3], v16, &hObject);
      IdForBuffer = HRESULTFromNTSTATUS(v11);
      v10 = IdForBuffer;
      if ( IdForBuffer < 0 )
      {
        v12 = 205;
      }
      else
      {
        IdForBuffer = Flip::CSynchronizationContext::Present(this[12], a2, a3, hObject);
        v10 = IdForBuffer;
        if ( IdForBuffer >= 0 )
          goto LABEL_13;
        v12 = 211;
      }
    }
  }
  else
  {
    v13 = NtFlipObjectConsumerAdjustUsageReference(this[3], v16, 0LL);
    IdForBuffer = HRESULTFromNTSTATUS(v13);
    v10 = IdForBuffer;
    if ( IdForBuffer >= 0 )
      goto LABEL_13;
    v12 = 219;
  }
  DoStackCaptureDirect(IdForBuffer, v12);
LABEL_13:
  if ( hObject )
    CloseHandle(hObject);
  return v10;
}
