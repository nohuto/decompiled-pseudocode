/*
 * XREFs of PropertyGetPinName @ 0x1C002F750
 * Callers:
 *     <none>
 * Callees:
 *     RegistryReadName @ 0x1C0031850 (RegistryReadName.c)
 */

__int64 __fastcall PropertyGetPinName(IRP *a1, __int64 a2, _WORD *a3)
{
  signed int Name; // ebx
  unsigned __int64 Length; // rsi
  PKSFILTER FilterFromIrp; // rax
  const KSFILTER_DESCRIPTOR *Descriptor; // r8
  __int64 v10; // rdx
  _QWORD *Context; // r11
  int v12; // eax
  const KSPIN_DESCRIPTOR_EX *PinDescriptors; // r10
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned int v16; // ebp
  __int64 v17; // r8
  const GUID *v18; // rdx
  __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // r9
  __int16 v24; // ax
  _WORD *v25; // rax
  int v26; // r8d
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  __int64 v31; // r8
  __int16 v32; // ax
  _WORD *v33; // rax
  unsigned int v35; // [rsp+50h] [rbp+8h] BYREF

  Name = -1073741275;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v35 = 0;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( FilterFromIrp )
  {
    Descriptor = FilterFromIrp->Descriptor;
    v10 = *(unsigned int *)(a2 + 24);
    if ( (unsigned int)v10 < FilterFromIrp->Descriptor->PinDescriptorsCount )
    {
      Context = FilterFromIrp->Context;
      v12 = 0;
      PinDescriptors = Descriptor->PinDescriptors;
      v14 = 22 * v10;
      v15 = Context[2];
      v16 = *(_DWORD *)(v15 + 192);
      v17 = *(_QWORD *)(v15 + 200);
      if ( !v16 )
        goto LABEL_6;
      while ( *(_DWORD *)(v17 + 84) != (_DWORD)v10 )
      {
        v17 += 168LL;
        if ( ++v12 >= v16 )
          goto LABEL_6;
      }
      v19 = *(unsigned __int16 *)(v17 + 112);
      if ( (_WORD)v19 )
      {
        if ( !(_DWORD)Length )
        {
          v35 = v19 + 2;
LABEL_25:
          Name = (unsigned int)Length < *(unsigned __int16 *)(v17 + 112) ? 0x80000005 : 0;
LABEL_43:
          a1->IoStatus.Information = v35;
          return (unsigned int)Name;
        }
        v20 = v19 + 2;
        if ( v19 + 2 >= Length )
          v20 = Length;
        v35 = v20;
        v21 = Length >> 1;
        if ( Length >> 1 )
        {
          v22 = ((unsigned __int64)*(unsigned __int16 *)(v17 + 112) >> 1) - v21;
          v23 = *(_QWORD *)(v17 + 120) - (_QWORD)a3;
          do
          {
            if ( !(v22 + v21) )
              break;
            v24 = *(_WORD *)((char *)a3 + v23);
            if ( !v24 )
              break;
            *a3++ = v24;
            --v21;
          }
          while ( v21 );
          v25 = a3 - 1;
          if ( v21 )
            v25 = a3;
          Name = v21 == 0 ? 0x80000005 : 0;
          *v25 = 0;
        }
        else
        {
          Name = -1073741811;
        }
        if ( Name >= 0 )
          goto LABEL_25;
      }
      else
      {
LABEL_6:
        v18 = (&PinDescriptors->PinDescriptor.Name)[v14];
        if ( v18 || (v18 = (&PinDescriptors->PinDescriptor.Category)[v14]) != 0LL )
        {
          Name = RegistryReadName((_DWORD)Context, (_DWORD)v18, Length, (_DWORD)a3, (__int64)&v35);
        }
        else
        {
          v26 = *(_DWORD *)(v15 + 32);
          if ( !(_DWORD)Length )
            return (unsigned int)Name;
          v27 = Length;
          if ( 2 * (unsigned __int64)(unsigned int)(v26 + 1) < Length )
            LODWORD(Length) = 2 * v26 + 2;
          v28 = v27 >> 1;
          v35 = Length;
          v29 = *(unsigned int *)(v15 + 32);
          if ( v28 )
          {
            if ( v29 <= 0x7FFFFFFE )
            {
              v30 = v29 - v28;
              v31 = *(_QWORD *)(v15 + 24) - (_QWORD)a3;
              do
              {
                if ( !(v30 + v28) )
                  break;
                v32 = *(_WORD *)((char *)a3 + v31);
                if ( !v32 )
                  break;
                *a3++ = v32;
                --v28;
              }
              while ( v28 );
              v33 = a3 - 1;
              if ( v28 )
                v33 = a3;
              Name = v28 == 0 ? 0x80000005 : 0;
              *v33 = 0;
            }
            else
            {
              Name = -1073741811;
              *a3 = 0;
            }
          }
          else
          {
            Name = -1073741811;
          }
        }
        if ( Name >= 0 )
          goto LABEL_43;
      }
      if ( Name == -2147483643 || Name == -1073741789 )
        goto LABEL_43;
    }
  }
  return (unsigned int)Name;
}
