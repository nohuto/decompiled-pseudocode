/*
 * XREFs of ??_GResourceGroupInstance@@UEAAPEAXI@Z @ 0x1800FECE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1ResourceGroupInstance@@UEAA@XZ @ 0x1800FEAF0 (--1ResourceGroupInstance@@UEAA@XZ.c)
 */

ResourceGroupInstance *__fastcall ResourceGroupInstance::`scalar deleting destructor'(
        ResourceGroupInstance *this,
        char a2)
{
  ResourceGroupInstance::~ResourceGroupInstance(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
