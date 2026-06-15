/*
 * XREFs of ??_GDuckingDescriptor@@UEAAPEAXI@Z @ 0x180021080
 * Callers:
 *     ??1?$unique_ptr@VDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@std@@QEAA@XZ @ 0x1800203B4 (--1-$unique_ptr@VDuckingDescriptor@@U-$default_delete@VDuckingDescriptor@@@std@@@std@@QEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count_obj2@VDuckingDescriptor@@@std@@EEAAXXZ @ 0x1800231D0 (-_Destroy@-$_Ref_count_obj2@VDuckingDescriptor@@@std@@EEAAXXZ.c)
 *     ?_Destroy@?$_Ref_count_resource@PEAVDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@std@@EEAAXXZ @ 0x1800231F0 (-_Destroy@-$_Ref_count_resource@PEAVDuckingDescriptor@@U-$default_delete@VDuckingDescriptor@@@st.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 */

DuckingDescriptor *__fastcall DuckingDescriptor::`scalar deleting destructor'(DuckingDescriptor *this, char a2)
{
  *(_QWORD *)this = &IDuckingDescriptor::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
