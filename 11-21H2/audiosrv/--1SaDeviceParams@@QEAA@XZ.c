/*
 * XREFs of ??1SaDeviceParams@@QEAA@XZ @ 0x18002B404
 * Callers:
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18002B3D8 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SaDeviceParams::~SaDeviceParams(LPVOID *this)
{
  CoTaskMemFree(this[3]);
  this[3] = 0LL;
  CoTaskMemFree(this[2]);
  this[2] = 0LL;
  CoTaskMemFree(*this);
  *this = 0LL;
}
