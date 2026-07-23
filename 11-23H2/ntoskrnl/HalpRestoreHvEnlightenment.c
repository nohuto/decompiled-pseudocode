/*
 * XREFs of HalpRestoreHvEnlightenment @ 0x14050C7F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerUpdateApiConsumers @ 0x14051FE74 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpRestoreHvEnlightenment()
{
  HalpEnlightenment = HalpEnlightenmentHbSaved;
  *(&HalpEnlightenment + 1) = dword_140C62204;
  *(&HalpEnlightenment + 7) = dword_140C6221C;
  *((_QWORD *)&HalpEnlightenment + 4) = qword_140C62220;
  *((_QWORD *)&HalpEnlightenment + 6) = qword_140C62230;
  *((_QWORD *)&HalpEnlightenment + 7) = qword_140C62238;
  *((_QWORD *)&HalpEnlightenment + 8) = qword_140C62240;
  *((_QWORD *)&HalpEnlightenment + 9) = qword_140C62248;
  *((_QWORD *)&HalpEnlightenment + 10) = qword_140C62250;
  *((_QWORD *)&HalpEnlightenment + 11) = qword_140C62258;
  *((_QWORD *)&HalpEnlightenment + 14) = qword_140C62270;
  *((_QWORD *)&HalpEnlightenment + 19) = qword_140C62298;
  *((_QWORD *)&HalpEnlightenment + 20) = qword_140C622A0;
  *((_QWORD *)&HalpEnlightenment + 21) = qword_140C622A8;
  *((_QWORD *)&HalpEnlightenment + 22) = qword_140C622B0;
  *((_QWORD *)&HalpEnlightenment + 23) = qword_140C622B8;
  *((_QWORD *)&HalpEnlightenment + 24) = qword_140C622C0;
  *((_QWORD *)&HalpEnlightenment + 49) = qword_140C62388;
  *((_QWORD *)&HalpEnlightenment + 50) = qword_140C62390;
  *((_QWORD *)&HalpEnlightenment + 32) = qword_140C62300;
  *((_QWORD *)&HalpEnlightenment + 29) = qword_140C622E8;
  *((_QWORD *)&HalpEnlightenment + 30) = qword_140C622F0;
  *((_QWORD *)&HalpEnlightenment + 1) = qword_140C62208;
  *((_QWORD *)&HalpEnlightenment + 2) = qword_140C62210;
  *((_QWORD *)&HalpEnlightenment + 12) = qword_140C62260;
  *((_QWORD *)&HalpEnlightenment + 13) = qword_140C62268;
  *((_QWORD *)&HalpEnlightenment + 15) = qword_140C62278;
  *((_QWORD *)&HalpEnlightenment + 16) = qword_140C62280;
  *((_QWORD *)&HalpEnlightenment + 17) = qword_140C62288;
  *((_QWORD *)&HalpEnlightenment + 18) = qword_140C62290;
  *((_QWORD *)&HalpEnlightenment + 26) = qword_140C622D0;
  *((_QWORD *)&HalpEnlightenment + 27) = qword_140C622D8;
  *((_QWORD *)&HalpEnlightenment + 28) = qword_140C622E0;
  *((_QWORD *)&HalpEnlightenment + 31) = qword_140C622F8;
  *((_QWORD *)&HalpEnlightenment + 33) = qword_140C62308;
  *((_QWORD *)&HalpEnlightenment + 34) = qword_140C62310;
  *((_QWORD *)&HalpEnlightenment + 35) = qword_140C62318;
  *((_QWORD *)&HalpEnlightenment + 36) = qword_140C62320;
  *((_QWORD *)&HalpEnlightenment + 37) = qword_140C62328;
  *((_QWORD *)&HalpEnlightenment + 38) = qword_140C62330;
  *((_QWORD *)&HalpEnlightenment + 39) = qword_140C62338;
  *((_QWORD *)&HalpEnlightenment + 40) = qword_140C62340;
  *((_QWORD *)&HalpEnlightenment + 41) = qword_140C62348;
  *((_QWORD *)&HalpEnlightenment + 42) = qword_140C62350;
  *((_QWORD *)&HalpEnlightenment + 43) = qword_140C62358;
  *((_QWORD *)&HalpEnlightenment + 44) = qword_140C62360;
  *((_QWORD *)&HalpEnlightenment + 45) = qword_140C62368;
  *((_QWORD *)&HalpEnlightenment + 46) = qword_140C62370;
  *((_QWORD *)&HalpEnlightenment + 47) = qword_140C62378;
  *((_QWORD *)&HalpEnlightenment + 48) = qword_140C62380;
  return HalpTimerUpdateApiConsumers();
}
