/*
 * XREFs of HalpSaveAndDisableEnlightenment @ 0x14050CB90
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14031FD6C (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x14051FE74 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpSaveAndDisableEnlightenment()
{
  __int64 result; // rax
  char v1; // dl

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140C6221C = dword_140C6249C;
    qword_140C62220 = (__int64)qword_140C624A0;
    dword_140C62204 = dword_140C62484;
    qword_140C62230 = qword_140C624B0;
    qword_140C62238 = qword_140C624B8;
    qword_140C62240 = qword_140C624C0;
    qword_140C62248 = qword_140C624C8;
    qword_140C62250 = qword_140C624D0;
    qword_140C62258 = qword_140C624D8;
    qword_140C62270 = (__int64)qword_140C624F0;
    qword_140C62298 = (__int64)qword_140C62518;
    qword_140C622A0 = qword_140C62520;
    qword_140C622A8 = qword_140C62528;
    qword_140C622B0 = qword_140C62530;
    qword_140C622B8 = qword_140C62538;
    qword_140C622C0 = qword_140C62540;
    HalpEnlightenmentHbSaved = HalpEnlightenment;
    qword_140C62388 = (__int64)qword_140C62608;
    qword_140C62390 = qword_140C62610;
    qword_140C62300 = qword_140C62580;
    qword_140C622E8 = (__int64)qword_140C62568;
    qword_140C622F0 = qword_140C62570;
    xmmword_140C62208 = xmmword_140C62488;
    qword_140C62260 = qword_140C624E0;
    qword_140C62268 = qword_140C624E8;
    qword_140C62278 = (__int64)qword_140C624F8;
    qword_140C62280 = (__int64)qword_140C62500;
    qword_140C62288 = (__int64)qword_140C62508;
    qword_140C62290 = qword_140C62510;
    qword_140C622D0 = (__int64)qword_140C62550;
    qword_140C622D8 = (__int64)qword_140C62558;
    qword_140C622E0 = qword_140C62560;
    qword_140C622F8 = qword_140C62578;
    qword_140C62308 = qword_140C62588;
    qword_140C62310 = qword_140C62590;
    qword_140C62318 = qword_140C62598;
    qword_140C62320 = qword_140C625A0;
    qword_140C62328 = qword_140C625A8;
    qword_140C62330 = qword_140C625B0;
    qword_140C62338 = qword_140C625B8;
    qword_140C62340 = qword_140C625C0;
    qword_140C62348 = qword_140C625C8;
    qword_140C62350 = qword_140C625D0;
    qword_140C62358 = qword_140C625D8;
    qword_140C62360 = qword_140C625E0;
    qword_140C62368 = qword_140C625E8;
    qword_140C62370 = qword_140C625F0;
    qword_140C62378 = qword_140C625F8;
    qword_140C62380 = qword_140C62600;
    HalpEnlightenment = 0;
    dword_140C6249C = -1;
    qword_140C624A0 = 0LL;
    dword_140C62484 = 0;
    qword_140C624B0 = 0LL;
    qword_140C624B8 = 0LL;
    qword_140C624C0 = 0LL;
    qword_140C624C8 = 0LL;
    qword_140C624D0 = 0LL;
    qword_140C624D8 = 0LL;
    qword_140C624F0 = 0LL;
    qword_140C62518 = 0LL;
    qword_140C62520 = 0LL;
    qword_140C62528 = 0LL;
    qword_140C62530 = 0LL;
    qword_140C62538 = 0LL;
    qword_140C62540 = 0LL;
    qword_140C62608 = 0LL;
    qword_140C62580 = 0LL;
    if ( !v1 )
      qword_140C62568 = 0LL;
    qword_140C62570 = 0LL;
    xmmword_140C62488 = 0uLL;
    qword_140C624E0 = 0LL;
    qword_140C624E8 = 0LL;
    qword_140C624F8 = 0LL;
    qword_140C62500 = 0LL;
    qword_140C62508 = 0LL;
    qword_140C62510 = 0LL;
    qword_140C62550 = 0LL;
    qword_140C62558 = 0LL;
    qword_140C62560 = 0LL;
    qword_140C62578 = 0LL;
    qword_140C62588 = 0LL;
    qword_140C62590 = 0LL;
    qword_140C62598 = 0LL;
    qword_140C625A0 = 0LL;
    qword_140C625A8 = 0LL;
    qword_140C625B0 = 0LL;
    qword_140C625B8 = 0LL;
    qword_140C625C0 = 0LL;
    qword_140C625C8 = 0LL;
    qword_140C625D0 = 0LL;
    qword_140C625D8 = 0LL;
    qword_140C625E0 = 0LL;
    qword_140C625E8 = 0LL;
    qword_140C625F0 = 0LL;
    qword_140C625F8 = 0LL;
    qword_140C62600 = 0LL;
    return HalpTimerUpdateApiConsumers();
  }
  return result;
}
