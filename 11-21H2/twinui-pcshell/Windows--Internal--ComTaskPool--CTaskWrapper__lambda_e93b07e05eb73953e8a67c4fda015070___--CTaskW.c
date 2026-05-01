/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e93b07e05eb73953e8a67c4fda015070___::CTaskWrapper__lambda_e93b07e05eb73953e8a67c4fda015070_____lambda_e93b07e05eb73953e8a67c4fda015070___ @ 0x1800A31E8
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e93b07e05eb73953e8a67c4fda015070___ @ 0x1800A3154 (Windows--Internal--ComTaskPool--QueueTask__lambda_e93b07e05eb73953e8a67c4fda015070___.c)
 * Callees:
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1800714F0 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e93b07e05eb73953e8a67c4fda015070___::CTaskWrapper__lambda_e93b07e05eb73953e8a67c4fda015070_____lambda_e93b07e05eb73953e8a67c4fda015070___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 24);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (_QWORD *)(a1 + 48),
    a2 + 32,
    v4);
  *(_QWORD *)(a1 + 48) = &SingleViewExperienceTelemetry::Launch::`vftable';
  *(_QWORD *)a1 = off_180621AD0;
  return a1;
}
