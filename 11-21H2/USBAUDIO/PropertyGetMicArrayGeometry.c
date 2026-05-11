/*
 * XREFs of PropertyGetMicArrayGeometry @ 0x1C002F130
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0019680 (memmove.c)
 *     GetMicArrayGeometryInfo @ 0x1C002E064 (GetMicArrayGeometryInfo.c)
 */

__int64 __fastcall PropertyGetMicArrayGeometry(IRP *a1, __int64 a2, void *a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Options; // ebx
  unsigned int Length; // ebp
  PKSFILTER FilterFromIrp; // rax
  int MicArrayGeometryInfo; // ebx
  int v11; // ecx
  ULONG_PTR v12; // rdi
  void *Src; // [rsp+40h] [rbp+8h] BYREF

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  Src = 0LL;
  if ( Options >= 0x20 )
  {
    if ( (*(_DWORD *)(a2 + 20) & 1) != 0 )
    {
      MicArrayGeometryInfo = GetMicArrayGeometryInfo(FilterFromIrp, *(_DWORD *)(a2 + 24), &Src);
      if ( MicArrayGeometryInfo >= 0 )
      {
        v11 = *((unsigned __int16 *)Src + 8);
        v12 = (unsigned int)(12 * v11 + 18);
        if ( Length )
        {
          if ( Length >= 12 * v11 + 18 )
            memmove(a3, Src, (unsigned int)(12 * v11 + 18));
          else
            MicArrayGeometryInfo = -1073741789;
        }
        else
        {
          MicArrayGeometryInfo = -2147483643;
        }
        a1->IoStatus.Information = v12;
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741808;
  }
  return (unsigned int)MicArrayGeometryInfo;
}
