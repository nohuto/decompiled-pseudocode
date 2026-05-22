/*
 * XREFs of ?IsConsumerConnected@CFlipProducer@Flip@@UEAAJPEA_N@Z @ 0x1801AA760
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall Flip::CFlipProducer::IsConsumerConnected(Flip::CFlipProducer *this, bool *a2)
{
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = NtFlipObjectQueryEndpointConnected(*((_QWORD *)this + 3), 0LL, &v7);
  v4 = HRESULTFromNTSTATUS(v3);
  v5 = v4;
  if ( v4 < 0 )
    DoStackCaptureDirect(v4, 0x4Cu);
  result = v5;
  *a2 = v7 != 0;
  return result;
}
