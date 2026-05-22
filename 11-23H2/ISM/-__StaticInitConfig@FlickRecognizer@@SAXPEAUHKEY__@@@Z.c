/*
 * XREFs of ?__StaticInitConfig@FlickRecognizer@@SAXPEAUHKEY__@@@Z @ 0x1801D47F4
 * Callers:
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x1801D64E8 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 * Callees:
 *     ?ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z @ 0x1801D3C40 (-ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z.c)
 */

void __fastcall FlickRecognizer::__StaticInitConfig(HKEY a1)
{
  FlickRecognizer::s_minimumFlickSpeed = GestureSession::ReadRegConfigValue(a1, L"FlickMinimumFlickSpeed", 0x64u, 1);
  FlickRecognizer::s_minimumFlickDelta = GestureSession::ReadRegConfigValue(a1, L"FlickMinimumFlickDelta", 0x1Eu, 1);
  FlickRecognizer::s_maximumFlickTail = GestureSession::ReadRegConfigValue(a1, L"FlickMaximumTimeTail", 0x64u, 0);
  FlickRecognizer::s_maximumFlickUp = GestureSession::ReadRegConfigValue(a1, L"FlickMaximumTimeUp", 0x32u, 0);
}
