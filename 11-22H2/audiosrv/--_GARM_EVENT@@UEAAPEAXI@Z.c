/*
 * XREFs of ??_GARM_EVENT@@UEAAPEAXI@Z @ 0x18004BE30
 * Callers:
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z @ 0x18002032C (-DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??1ARM_EVENT@@UEAA@XZ @ 0x18004BE6C (--1ARM_EVENT@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

ARM_EVENT *__fastcall ARM_EVENT::`scalar deleting destructor'(ARM_EVENT *this, char a2)
{
  ARM_EVENT::~ARM_EVENT(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x48uLL);
  return this;
}
