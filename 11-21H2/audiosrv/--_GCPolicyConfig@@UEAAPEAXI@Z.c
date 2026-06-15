/*
 * XREFs of ??_GCPolicyConfig@@UEAAPEAXI@Z @ 0x1800C2F40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CPolicyConfig@@UEAA@XZ @ 0x1800C2A18 (--1CPolicyConfig@@UEAA@XZ.c)
 */

CPolicyConfig *__fastcall CPolicyConfig::`scalar deleting destructor'(CPolicyConfig *this, char a2)
{
  CPolicyConfig::~CPolicyConfig(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
