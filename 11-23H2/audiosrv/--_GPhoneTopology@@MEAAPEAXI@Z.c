/*
 * XREFs of ??_GPhoneTopology@@MEAAPEAXI@Z @ 0x18002619C
 * Callers:
 *     ??_EPhoneTopology@@O7EAAPEAXI@Z @ 0x180077F50 (--_EPhoneTopology@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1PhoneTopology@@MEAA@XZ @ 0x180026958 (--1PhoneTopology@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

PhoneTopology *__fastcall PhoneTopology::`scalar deleting destructor'(PhoneTopology *this, char a2)
{
  PhoneTopology::~PhoneTopology(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x518uLL);
  return this;
}
