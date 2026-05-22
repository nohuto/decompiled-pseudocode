/*
 * XREFs of ?Create@MPCHandProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801B28D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VMPCHandProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801B2594 (--$MakeAndInitialize@VMPCHandProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@De.c)
 */

__int64 __fastcall MPCHandProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  const struct InputProcessorCreateParams *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  return Microsoft::WRL::Details::MakeAndInitialize<MPCHandProcessor,IInputProcessor,InputProcessorCreateParams * &>(
           a2,
           &v3);
}
