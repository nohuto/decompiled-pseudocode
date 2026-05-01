/*
 * XREFs of ??_GCDropFeedbackItem@@UEAAPEAXI@Z @ 0x1805380F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180188D28 (--3@YAXPEAX@Z.c)
 *     ??1CDropFeedbackItem@@UEAA@XZ @ 0x180537F14 (--1CDropFeedbackItem@@UEAA@XZ.c)
 */

CDropFeedbackItem *__fastcall CDropFeedbackItem::`scalar deleting destructor'(CDropFeedbackItem *this, char a2)
{
  CDropFeedbackItem::~CDropFeedbackItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
